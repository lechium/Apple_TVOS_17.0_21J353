//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDResidentDeviceManagerXPCDiscoveryRequester : NSObject
{
    CDUnknownBlockType _block;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000082c367
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)residentDeviceManager:(id)arg1 didCompleteDiscoveryWithPrimaryResidentDevice:(id)arg2 error:(id)arg3;	// IMP=0x000000000082c2d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

