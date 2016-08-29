/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWGNRNode : BWNode <BWBracketSettingsProvider> {
    NSArray * _afWindowParamsArray;
    bool  _allowedToModifyInputBuffers;
    bool  _alwaysRequestsPreBracketedEV0;
    bool  _alwaysRequestsPreBracketedEV0ForOIS;
    bool  _clientExpectsPreBracketFrame;
    struct opaqueCMSampleBuffer { } * _collectedProcessedPreBracketHDR;
    int (* _createSampleBufferProcessorFunction;
    FigCaptureStillImageSettings * _currentRequestedStillImageCaptureSettings;
    BWStillImageCaptureSettings * _currentResolvedStillImageCaptureSettings;
    unsigned int  _expectedFrameCount;
    bool  _expectsPreBracketFrame;
    bool  _expectsReferenceFrameBracketedCaptureSequenceNumber;
    int  _hdrBracketCount;
    bool  _hdrEnabled;
    NSArray * _hdrExposureValues;
    bool  _hdrProcessingTypeConfiguredToSampleBufferProcessor;
    int  _oisBracketCount;
    bool  _oisEnabled;
    NSArray * _oisExposureDurationTypes;
    NSString * _portType;
    long long  _previouslyCompletedFusionSettingsID;
    int  _processingType;
    bool  _receivedAllFrames;
    unsigned int  _receivedFrameCount;
    bool  _receivedPreBracketFrame;
    int  _receivedReferenceFrameBracketedCaptureSequenceNumber;
    struct OpaqueFigSampleBufferProcessor { } * _sampleBufferProcessor;
    NSString * _sensorConfig;
    NSString * _sensorID;
    NSDictionary * _sensorIDDictionary;
    NSString * _sensorSettings;
    int  _sisBracketCount;
    bool  _sisEnabled;
    NSArray * _sisExposureValues;
    NSDictionary * _streamConfigurationDictionary;
    bool  _usesHDRPreBracketFrameForErrorRecoveryDownstream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)_clearCaptureRequestState;
- (void)_detectMissingPreBracketedFrameAndEmitBWNodeError;
- (int)_gnrProcessingTypeWithStillImageStreamCaptureType:(int)arg1 doesHDR:(bool)arg2;
- (id)_hdrBracketSettingsWithCurrentFrameStats:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; int x12; int x13; unsigned int x14; float x15; long long x16; }*)arg1 stillImageSettings:(id)arg2;
- (id)_initWithSISEnabled:(bool)arg1 OISEnabled:(bool)arg2 HDREnabled:(bool)arg3 portType:(id)arg4 sensorID:(id)arg5 sensorIDDictionary:(id)arg6 sensorConfig:(id)arg7 sensorSettings:(id)arg8 streamConfigurationDictionary:(id)arg9 sbpCreationFunction:(int (*)arg10 treatSoftErrorsAsHardErrors:(bool)arg11;
- (id)_oisBracketSettingsWithCurrentFrameStats:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; int x12; int x13; unsigned int x14; float x15; long long x16; }*)arg1 stillImageSettings:(id)arg2;
- (void)_processSequenceInSampleBufferProcessor;
- (bool)_receivedExpectedAmountOfFrames;
- (void)_sampleBufferProcessorOutputReady:(int)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)_setExpectedFrameCountForCaptureType:(int)arg1 deliverOriginalImage:(bool)arg2 bracketSettings:(id)arg3;
- (int)_setPropertyOnSampleBufferProcessorWithKey:(struct __CFString { }*)arg1 value:(void*)arg2;
- (void)_setReferenceFrameBracketedCaptureSequenceNumberOnSampleBufferProcessor:(int)arg1;
- (int)_setupSampleBufferProcessor;
- (id)_sisBracketSettingsWithCurrentFrameStats:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; int x12; int x13; unsigned int x14; float x15; long long x16; }*)arg1 stillImageSettings:(id)arg2;
- (id)_tuningDictionaryWithOnlyGNRParameters;
- (int)_unpackOptions;
- (unsigned int)_worstCaseFrameRetainCount;
- (bool)allowedToModifyInputBuffers;
- (bool)alwaysRequestsPreBracketedEV0;
- (bool)alwaysRequestsPreBracketedEV0ForOIS;
- (bool)attachesInputBracketToOutputSampleBuffer;
- (id)bracketSettingsForBracketingMode:(int)arg1 withCurrentFrameStats:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; int x12; int x13; unsigned int x14; float x15; long long x16; }*)arg2 stillImageSettings:(id)arg3;
- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2;
- (id)initWithSISEnabled:(bool)arg1 OISEnabled:(bool)arg2 HDREnabled:(bool)arg3 portType:(id)arg4 sensorID:(id)arg5 sensorIDDictionary:(id)arg6 sensorConfig:(id)arg7 sensorSettings:(id)arg8 streamConfigurationDictionary:(id)arg9;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)sbpOptionsDictionary;
- (void)setAllowedToModifyInputBuffers:(bool)arg1;
- (void)setAlwaysRequestsPreBracketedEV0:(bool)arg1;
- (void)setAlwaysRequestsPreBracketedEV0ForOIS:(bool)arg1;
- (void)setAttachesInputBracketToOutputSampleBuffer:(bool)arg1;
- (void)setUsesHDRPreBracketFrameForErrorRecoveryDownstream:(bool)arg1;
- (bool)usesHDRPreBracketFrameForErrorRecoveryDownstream;
- (int)worstCaseInitialMaxBracketCountForBracketingMode:(int)arg1;

@end