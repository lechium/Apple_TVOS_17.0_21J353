//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GCNintendoJoyConProfile : NSObject
{
}

+ (void)physicalDevice:(id)arg1 getBatteryWithReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003c8da
+ (void)physicalDevice:(id)arg1 setIndicatedPlayerIndex:(long long)arg2;	// IMP=0x001000000003c610
+ (long long)physicalDeviceGetIndicatedPlayerIndex:(id)arg1;	// IMP=0x001000000003c3b3
+ (id)deviceManager;	// IMP=0x001000000003c35e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

