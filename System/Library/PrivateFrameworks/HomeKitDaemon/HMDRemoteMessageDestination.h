//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageDestination.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDRemoteMessageDestination : HMFMessageDestination
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000085d605
+ (id)allMessageDestinations;	// IMP=0x001000000085d55d
- (id)remoteDestinationString;	// IMP=0x000000000085d4b5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

