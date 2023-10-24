//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMMDateProvider, NSString;

__attribute__((visibility("hidden")))
@interface HMDLogEventWeekBasedFilter : NSObject
{
    HMMDateProvider *_dateProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000009b3b93
@property(readonly, nonatomic) HMMDateProvider *dateProvider; // @synthesize dateProvider=_dateProvider;
- (_Bool)isEventInSample:(id)arg1;	// IMP=0x00000000009b3a47
- (unsigned long long)resultHashWithEvent:(id)arg1;	// IMP=0x00000000009b3873
- (id)initWithDateProvider:(id)arg1;	// IMP=0x00000000009b3808

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

