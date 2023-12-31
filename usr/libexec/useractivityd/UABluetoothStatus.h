//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableDictionary;

@interface UABluetoothStatus : NSObject
{
    struct BTSessionImpl *_session;	// 8 = 0x8
    struct BTLocalDeviceImpl *_localDevice;	// 16 = 0x10
    MISSING_TYPE *_attached;	// 24 = 0x18
    _Bool _attachInProcess;	// 25 = 0x19
    _Bool _terminated;	// 26 = 0x1a
    _Bool _poweredOn;	// 27 = 0x1b
    _Bool _poweredOnValid;	// 28 = 0x1c
    NSMutableDictionary *_callbacks;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00400000000520fe
- (void).cxx_destruct;	// IMP=0x00200000000533b4
- (void)handleLocalDeviceCallback:(struct BTLocalDeviceImpl *)arg1 event:(int)arg2 result:(int)arg3;	// IMP=0x001000000005327c
- (void)terminateSession:(struct BTSessionImpl *)arg1;	// IMP=0x001000000005318f
- (void)detachSession:(struct BTSessionImpl *)arg1;	// IMP=0x0010000000052fd5
- (void)attachSession:(struct BTSessionImpl *)arg1;	// IMP=0x0010000000052d02
- (void)handleSessionEvent:(struct BTSessionImpl *)arg1 event:(int)arg2 result:(int)arg3;	// IMP=0x0010000000052cdf
- (void)processCallbacks;	// IMP=0x0010000000052ae3
- (void)unregisterCallback:(id)arg1;	// IMP=0x00100000000529b7
- (id)registerCallback:(CDUnknownBlockType)arg1;	// IMP=0x00100000000527d7
- (void)detachFromBluetoothSession;	// IMP=0x0010000000052660
- (void)attachToBluetoothSession;	// IMP=0x00100000000523ed
- (_Bool)poweredOn;	// IMP=0x0010000000052153
- (void)dealloc;	// IMP=0x00100000000520c0
- (id)init;	// IMP=0x0010000000052074
- (struct BTLocalDeviceImpl *)localDevice;	// IMP=0x001000000005206a
- (struct BTSessionImpl *)session;	// IMP=0x0010000000052060

@end

