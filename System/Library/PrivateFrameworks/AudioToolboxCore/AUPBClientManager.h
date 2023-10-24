//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSXPCConnection;
@protocol AUPBRegistrarHosting, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AUPBClientManager : NSObject
{
    NSXPCConnection *mRegistrarConnection;	// 8 = 0x8
    id <AUPBRegistrarHosting> mProxyInterface;	// 16 = 0x10
    NSMutableArray *mRemoteServers;	// 24 = 0x18
    struct vector<PropertyListener, std::allocator<PropertyListener>> mPropertyListeners;	// 32 = 0x20
    struct vector<NewServerListener, std::allocator<NewServerListener>> mNewServerListeners;	// 56 = 0x38
    unsigned int mServerRefCounter;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *mTouchServersQueue;	// 88 = 0x58
    int mNotifyToken;	// 96 = 0x60
    _Bool mValidToken;	// 100 = 0x64
    _Bool mConnectionAcknowledged;	// 101 = 0x65
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001c758f
+ (id)sharedInstance;	// IMP=0x00100000001c7510
- (id).cxx_construct;	// IMP=0x00000000001cab60
- (void).cxx_destruct;	// IMP=0x00000000001cab26
- (int)setSerialAUProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 toData:(id)arg6;	// IMP=0x00000000001ca854
- (int)getSerialAUProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 inData:(id *)arg6;	// IMP=0x00000000001ca583
- (int)setAUParameter:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 value:(float)arg6;	// IMP=0x00000000001ca2a7
- (int)getAUParameter:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 copiedIntoValue:(float *)arg6;	// IMP=0x00000000001c9fcb
- (int)setAUProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 withValue:(const void *)arg6 size:(unsigned int)arg7;	// IMP=0x00000000001c9c30
- (int)getAUProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 copiedIntoBufer:(void **)arg6 withSize:(unsigned int *)arg7;	// IMP=0x00000000001c9954
- (int)getAUPropertyInfo:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 intoDataSize:(unsigned int *)arg6 writeable:(char *)arg7;	// IMP=0x00000000001c9678
- (int)setPBProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 block:(struct OpaqueAUPB *)arg3 value:(void *)arg4;	// IMP=0x00000000001c93b2
- (int)copyPBProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 block:(struct OpaqueAUPB *)arg3 intoValue:(const void **)arg4;	// IMP=0x00000000001c9101
- (int)removePropertyListenersForServer:(struct OpaqueAUPBServer *)arg1;	// IMP=0x00000000001c90ae
- (int)removePropertyListener:(CDUnknownFunctionPointerType)arg1 onServer:(struct OpaqueAUPBServer *)arg2 block:(struct OpaqueAUPB *)arg3 property:(unsigned int)arg4 withUserData:(void *)arg5;	// IMP=0x00000000001c8f1f
- (int)addPropertyListener:(CDUnknownFunctionPointerType)arg1 onServer:(struct OpaqueAUPBServer *)arg2 block:(struct OpaqueAUPB *)arg3 property:(unsigned int)arg4 withUserData:(void *)arg5;	// IMP=0x00000000001c8c87
- (int)removeServerListener:(CDUnknownFunctionPointerType)arg1 withUserData:(void *)arg2;	// IMP=0x00000000001c8b48
- (int)addNewServerListener:(CDUnknownFunctionPointerType)arg1 withUserData:(void *)arg2;	// IMP=0x00000000001c88f4
- (id)serverFromRef:(struct OpaqueAUPBServer *)arg1;	// IMP=0x00000000001c87cd
- (void)processingBlock:(unsigned int)arg1 propertiesChanged:(id)arg2 withQualifierData:(id)arg3;	// IMP=0x00000000001c81d7
- (void)processingBlock:(unsigned int)arg1 propertyChanged:(unsigned int)arg2;	// IMP=0x00000000001c7e92
- (unsigned int)auHandleFromRef:(struct OpaqueRemoteAudioUnit *)arg1;	// IMP=0x00000000001c7e89
- (struct OpaqueRemoteAudioUnit *)auRefFromHandle:(unsigned int)arg1;	// IMP=0x00000000001c7e81
- (struct OpaqueAUPB *)aupbRefFromHandle:(unsigned int)arg1;	// IMP=0x00000000001c7e79
- (void)newServerAdded:(id)arg1;	// IMP=0x00000000001c7b35
- (void)handleRegistrarCrash;	// IMP=0x00000000001c799f
- (void)startRegistarConnection;	// IMP=0x00000000001c7769
- (id)init;	// IMP=0x00000000001c7621
- (void)dealloc;	// IMP=0x00000000001c75d8
- (id)autorelease;	// IMP=0x00000000001c75cf
- (oneway void)release;	// IMP=0x00000000001c75c9
- (unsigned long long)retainCount;	// IMP=0x00000000001c75bc
- (id)retain;	// IMP=0x00000000001c75b3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c75aa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

