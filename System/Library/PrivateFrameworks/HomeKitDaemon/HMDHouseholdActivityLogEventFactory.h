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

- (void).cxx_destruct;	// IMP=0x00000000001d5d70
@property(readonly, nonatomic) NSArray *contributors; // @synthesize contributors=_contributors;
- (void)deleteCountersAfterDate:(id)arg1;	// IMP=0x00000000001d5c04
- (void)deleteCountersBeforeDate:(id)arg1;	// IMP=0x00000000001d5aa9
- (id)coalescedLogEventsFromLogEvents:(id)arg1 homeUUID:(id)arg2;	// IMP=0x00000000001d57e0
- (id)logEventsFromDictionary:(id)arg1;	// IMP=0x00000000001d56ef
- (id)serializeLogEvents:(id)arg1;	// IMP=0x00000000001d565d
- (id)logEventsPopulatedForHomeWithUUID:(id)arg1 associatedWithDate:(id)arg2;	// IMP=0x00000000001d555b
- (id)initWithContributors:(id)arg1;	// IMP=0x00000000001d54ed

@end

