//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AUAudioUnitV2Bridge.h"

__attribute__((visibility("hidden")))
@interface AUHALOutputUnit : AUAudioUnitV2Bridge
{
    CDUnknownBlockType _outputProvider;	// 112 = 0x70
    CDUnknownBlockType _inputHandler;	// 120 = 0x78
    _Bool _inputWasEnabled;	// 128 = 0x80
    _Bool _outputWasEnabled;	// 129 = 0x81
    _Bool _inputBusEnabled;	// 130 = 0x82
    int _renderObserverToken;	// 132 = 0x84
    struct unordered_map<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long), std::hash<long>, std::equal_to<long>, std::allocator<std::pair<const long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>>> _renderObservers;	// 136 = 0x88
}

- (id).cxx_construct;	// IMP=0x00000000001fa9e5
- (void).cxx_destruct;	// IMP=0x00000000001fa98e
- (void)stopHardware;	// IMP=0x00000000001fa974
- (_Bool)startHardwareAndReturnError:(id *)arg1;	// IMP=0x00000000001fa8f4
- (_Bool)isRunning;	// IMP=0x00000000001fa89a
@property(nonatomic, getter=isOutputEnabled) _Bool outputEnabled;
@property(nonatomic, getter=isInputEnabled) _Bool inputEnabled;
- (_Bool)canPerformOutput;	// IMP=0x00000000001fa6e3
- (_Bool)canPerformInput;	// IMP=0x00000000001fa677
- (void)setInputHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001fa5ab
- (void)setOutputProvider:(CDUnknownBlockType)arg1;	// IMP=0x00000000001fa507
- (int)enableBus:(unsigned int)arg1 scope:(unsigned int)arg2 enable:(_Bool)arg3;	// IMP=0x00000000001fa442
- (CDUnknownBlockType)_inputHandler;	// IMP=0x00000000001fa425
- (CDUnknownBlockType)outputProvider;	// IMP=0x00000000001fa408
- (void)removeRenderObserver:(CDUnknownFunctionPointerType)arg1 userData:(void *)arg2;	// IMP=0x00000000001fa3dc
- (void)addRenderObserver:(CDUnknownFunctionPointerType)arg1 userData:(void *)arg2;	// IMP=0x00000000001fa3b0
- (void)removeRenderObserver:(long long)arg1;	// IMP=0x00000000001fa149
- (long long)tokenByAddingRenderObserver:(CDUnknownBlockType)arg1;	// IMP=0x00000000001f9b75
- (void)initAUHALOutputUnit;	// IMP=0x00000000001f9b40
- (void)dealloc;	// IMP=0x00000000001f9a8f
- (id)initWithAudioUnit:(struct OpaqueAudioComponentInstance *)arg1 description:(struct AudioComponentDescription)arg2;	// IMP=0x00000000001f9a17
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x00000000001f999f

@end

