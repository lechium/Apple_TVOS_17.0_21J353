//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _GCDeviceOnDiskDB : NSObject
{
    NSArray *_configurationBundles;	// 8 = 0x8
    NSArray *_bundles;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000029632
@property(readonly, copy) NSArray *configurationBundles; // @synthesize configurationBundles=_configurationBundles;
- (id)bestModelMatchingDevice:(id)arg1;	// IMP=0x0000000000028a6d
- (id)init;	// IMP=0x0000000000028a54
- (id)initWithBundles:(id)arg1;	// IMP=0x0000000000028839

@end

