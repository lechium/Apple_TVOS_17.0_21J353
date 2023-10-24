//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSPointerArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRExternalDeviceManager : NSObject
{
    NSPointerArray *_devicesPointerArray;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x00600000000ca5b2
- (void).cxx_destruct;	// IMP=0x00000000000cab83
- (void)clearDevices;	// IMP=0x00000000000cab1c
- (void)registerDevice:(id)arg1;	// IMP=0x00000000000caa70
- (id)deviceWithIdentifier:(id)arg1;	// IMP=0x00000000000ca80a
@property(readonly, nonatomic) NSArray *allDevices;
- (id)init;	// IMP=0x00000000000ca607

@end

