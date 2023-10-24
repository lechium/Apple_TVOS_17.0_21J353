//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface HMDHouseholdActivityLogEventFactory : HMFObject
{
    NSArray *_contributors;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000463815
@property(readonly, nonatomic) NSArray *contributors; // @synthesize contributors=_contributors;
- (void)deleteCountersAfterDate:(id)arg1;	// IMP=0x00000000004636a9
- (void)deleteCountersBeforeDate:(id)arg1;	// IMP=0x000000000046354e
- (id)coalescedLogEventsFromLogEvents:(id)arg1 homeUUID:(id)arg2;	// IMP=0x0000000000463285
- (id)logEventsFromDictionary:(id)arg1;	// IMP=0x0000000000463194
- (id)serializeLogEvents:(id)arg1;	// IMP=0x0000000000463102
- (id)logEventsPopulatedForHomeWithUUID:(id)arg1 associatedWithDate:(id)arg2;	// IMP=0x0000000000463000
- (id)initWithContributors:(id)arg1;	// IMP=0x0000000000462f92

@end
