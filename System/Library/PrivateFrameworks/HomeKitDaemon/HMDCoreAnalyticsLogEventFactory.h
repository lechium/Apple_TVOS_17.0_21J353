//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDCoreAnalyticsLogEventFactory : NSObject
{
}

+ (id)logCategory;	// IMP=0x001000000095b2db
- (id)supportedTags;	// IMP=0x000000000095b433
- (id)logEventForTaggedEvent:(id)arg1;	// IMP=0x000000000095b342

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
