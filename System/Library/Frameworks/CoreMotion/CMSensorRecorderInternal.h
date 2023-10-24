//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMSensorRecorderInternal : NSObject
{
    NSObject<OS_dispatch_queue> *fInternalQueue;	// 8 = 0x8
    void *fLocationdConnection;	// 16 = 0x10
}

- (id)newDataByID:(unsigned long long)arg1 metaID:(unsigned long long)arg2 forType:(int)arg3;	// IMP=0x000000000016398b
- (_Bool)setSensorSampleRate:(unsigned int)arg1 forType:(int)arg2;	// IMP=0x00000000001634a1
- (_Bool)writeSensorDataToFile:(id)arg1 from:(double)arg2 to:(double)arg3 forType:(int)arg4;	// IMP=0x0000000000162f6d
- (id)newMetaFrom:(double)arg1 to:(double)arg2 forType:(int)arg3;	// IMP=0x0000000000162b59
- (id)_newMetaUsingMessage:(const char *)arg1 withIdentifier:(unsigned long long)arg2 forType:(int)arg3;	// IMP=0x0000000000162794
- (id)newMetaSinceID:(unsigned long long)arg1 forType:(int)arg2;	// IMP=0x0000000000162775
- (id)newMetaByID:(unsigned long long)arg1 forType:(int)arg2;	// IMP=0x0000000000162756
- (void)dealloc;	// IMP=0x0000000000162713
- (void)teardown;	// IMP=0x0000000000162690
- (id)init;	// IMP=0x00000000001625b5

@end

