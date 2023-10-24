//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AUAudioUnit.h"

@class AUAudioUnitBusArray_XPC, AUCrashHandler, AUParameterTree, NSArray, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface AUAudioUnit_XPC : AUAudioUnit
{
    struct recursive_mutex _propListenerMutex;	// 8 = 0x8
    struct OpaqueAudioComponentInstance *_componentInstance;	// 72 = 0x48
    NSXPCConnection *_xpcConnection;	// 80 = 0x50
    int _remotePID;	// 88 = 0x58
    struct mach_timebase_info _remoteMachTimebaseInfo;	// 92 = 0x5c
    AUCrashHandler *_crashHandler;	// 104 = 0x68
    _Bool _canRender;	// 112 = 0x70
    _Bool _canProcess;	// 113 = 0x71
    _Bool _removingObserverWithContext;	// 114 = 0x72
    struct mutex _parameterTreeMutex;	// 120 = 0x78
    AUAudioUnitBusArray_XPC *_inputBusses;	// 184 = 0xb8
    AUAudioUnitBusArray_XPC *_outputBusses;	// 192 = 0xc0
    struct unique_ptr<AUProcAndUserData, std::default_delete<AUProcAndUserData>> _elementCountListenerToken;	// 200 = 0xc8
    struct vector<AUAudioUnit_XPC_PropListener, std::allocator<AUAudioUnit_XPC_PropListener>> _propListeners;	// 208 = 0xd0
    struct shared_ptr<caulk::synchronized<auoop::RenderPipePool, std::recursive_mutex>> _renderPipePool;	// 232 = 0xe8
    struct optional<auoop::RenderPipeUser> _renderPipeUser;	// 248 = 0xf8
    AUParameterTree *_cachedParameterTree;	// 328 = 0x148
    NSArray *_userPresets;	// 336 = 0x150
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x006000000012c39a
- (id).cxx_construct;	// IMP=0x0000000000127de2
- (void).cxx_destruct;	// IMP=0x0000000000127cbc
- (id)speechVoices;	// IMP=0x0000000000127b49
- (void)cancelSpeechRequest;	// IMP=0x0000000000127975
- (void)synthesizeSpeechRequest:(id)arg1;	// IMP=0x000000000012776e
- (id)messageChannelFor:(id)arg1;	// IMP=0x0000000000127133
- (CDStruct_6ad76789)remoteProcessAuditToken;	// IMP=0x00000000001270cf
- (int)remoteProcessIdentifier;	// IMP=0x0000000000127081
- (_Bool)isLoadedInProcess;	// IMP=0x0000000000127079
- (id)userPresets;	// IMP=0x0000000000126a6e
- (id)presetStateFor:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001264b4
- (_Bool)deleteUserPreset:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001262a9
- (_Bool)saveUserPreset:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012604f
- (void)setCurrentPreset:(id)arg1;	// IMP=0x0000000000126033
- (void)setFullStateForDocument:(id)arg1;	// IMP=0x0000000000126017
- (void)setFullState:(id)arg1;	// IMP=0x0000000000125ffb
- (void)_setState:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000125f2b
- (void)invalidateAllParameters;	// IMP=0x0000000000125db2
- (_Bool)disableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id *)arg4;	// IMP=0x0000000000125be7
- (_Bool)enableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id *)arg4;	// IMP=0x0000000000125a1c
- (id)profileStateForCable:(unsigned char)arg1 channel:(unsigned char)arg2;	// IMP=0x0000000000125505
- (_Bool)providesUserInterface;	// IMP=0x00000000001254d2
- (void)selectViewConfiguration:(id)arg1;	// IMP=0x00000000001252f5
- (id)supportedViewConfigurations:(id)arg1;	// IMP=0x0000000000124dcc
- (id)parametersForOverviewWithCount:(long long)arg1;	// IMP=0x00000000001248b8
- (float)getV2Parameter:(unsigned long long)arg1 sequenceNumber:(unsigned int)arg2;	// IMP=0x0000000000124745
- (id)parameterTree;	// IMP=0x0000000000123f82
- (void)propertiesChanged:(id)arg1;	// IMP=0x0000000000123c05
- (id)_getBus:(unsigned int)arg1 scope:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x0000000000123adb
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x000000000012382f
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;	// IMP=0x0000000000123581
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;	// IMP=0x00000000001232fc
- (void)_refreshBusses:(unsigned int)arg1;	// IMP=0x0000000000122ff5
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x0000000000122e46
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x0000000000122cd1
- (void)_setValue:(id)arg1 forProperty:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000122aee
- (id)_getValueForKey:(id)arg1;	// IMP=0x0000000000122a72
- (id)_getValueForProperty:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001228cf
- (CDUnknownBlockType)internalRenderBlock;	// IMP=0x00000000001227ff
- (void)reset;	// IMP=0x00000000001227be
- (void)remoteReset;	// IMP=0x0000000000122639
- (void)internalDeallocateRenderResources;	// IMP=0x00000000001224cf
- (_Bool)allocateRenderResourcesAndReturnError:(id *)arg1;	// IMP=0x000000000011fd0e
- (void)setTransportStateBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000011fc1c
- (void)setMusicalContextBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000011fb2a
- (_Bool)_setBusCount:(unsigned long long)arg1 scope:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000011f954
- (id)outputBusses;	// IMP=0x000000000011f93f
- (id)inputBusses;	// IMP=0x000000000011f92a
- (void)_parameterTreeChanged;	// IMP=0x000000000011f8e6
- (void)dealloc;	// IMP=0x000000000011f6af
- (void)didCrash:(id)arg1;	// IMP=0x000000000011f27b
- (void)didInvalidate;	// IMP=0x000000000011f1b2
- (id)_getInvalidationNotificationInfo;	// IMP=0x000000000011efbd
- (void)_invalidatePipePoolAndUser;	// IMP=0x000000000011ef03
- (void)_doOpen:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000011de57
- (void)_setComponentInstance:(struct OpaqueAudioComponentInstance *)arg1;	// IMP=0x000000000011de46

@end
