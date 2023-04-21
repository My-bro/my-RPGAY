/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** record_mic
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <math.h>
#include <stdio.h>

static float calculate_decibel(const sfInt16* samples, size_t sampleCount)
{
    if (sampleCount == 0) {
        return 0;
    }
    double sum = 0.0;
    for (size_t i = 0; i < sampleCount; i++) {
        sum += samples[i] * samples[i];
    }
    double rms = sqrt(sum / sampleCount);
    float decibels = 20.0f * log10(rms / 32767.0f);
    float offsetDecibels = decibels + 90.3f;
    return offsetDecibels;
}

static float start_record(void)
{
    sfSoundBufferRecorder* recorder = sfSoundBufferRecorder_create();
    if (!recorder) {
        printf("Failed to create sound buffer recorder.\n");
    }
    if (!sfSoundRecorder_isAvailable()) {
        printf("Audio recording is not supported on this system.\n");
    }
    sfSoundRecorder_start((sfSoundRecorder*)recorder, 44100);
    printf("Recording for 2 seconds...\n");
    sfTime duration = sfSeconds(2);
    sfSleep(duration);
    sfSoundRecorder_stop((sfSoundRecorder*)recorder);
    const sfSoundBuffer* buffer = sfSoundBufferRecorder_getBuffer(recorder);
    const sfInt16* samples = sfSoundBuffer_getSamples(buffer);
    size_t sampleCount = sfSoundBuffer_getSampleCount(buffer);
    float highestDecibel = calculate_decibel(samples, sampleCount);
    printf("The highest decibel value is: %f dB\n", highestDecibel);
    sfSoundBufferRecorder_destroy(recorder);
    return highestDecibel;
}

float recorder(void)
{
    float decibel = 0;
    if (sfKeyboard_isKeyPressed(sfKeyM)) {
        decibel = start_record();
    }
    return decibel;
}
