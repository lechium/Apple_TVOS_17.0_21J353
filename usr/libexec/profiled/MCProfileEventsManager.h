//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MCProfileEventsDataProvider;

@interface MCProfileEventsManager : NSObject
{
    id <MCProfileEventsDataProvider> _dataProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000001e5ef
@property(retain, nonatomic) id <MCProfileEventsDataProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
- (void)_removeAllProfileEvents;	// IMP=0x001000000001e5bb
- (void)_saveProfileEvents:(id)arg1;	// IMP=0x001000000001e4c0
- (id)_timestampFromEvent:(id)arg1;	// IMP=0x001000000001e43c
- (id)_profileEvents;	// IMP=0x001000000001e3ad
- (id)_profileEventsOnDisk;	// IMP=0x001000000001e2d6
- (void)removeExpiredProfileEvents;	// IMP=0x001000000001dfa2
- (void)addEventForProfile:(id)arg1 operation:(id)arg2 source:(id)arg3;	// IMP=0x001000000001dce7
- (id)earlistProfileEventExpiry;	// IMP=0x001000000001da87
- (id)initWithDataProvider:(id)arg1;	// IMP=0x001000000001da1c
- (id)init;	// IMP=0x001000000001d9dc

@end

