//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BLSHInternalTapToRadarDialog;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface BLSHInternalTapToRadarManager : NSObject
{
    BLSHInternalTapToRadarDialog *_ttrDialog;	// 8 = 0x8
    NSObject<OS_os_log> *_log;	// 16 = 0x10
}

+ (id)sharedTapToRadarManager;	// IMP=0x0060000000038e1a
- (void).cxx_destruct;	// IMP=0x000000000003914d
- (void)requestTapToRadar:(id)arg1 log:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000038eaf
- (id)_init;	// IMP=0x0000000000038deb
- (id)init;	// IMP=0x0000000000038ddd

@end
