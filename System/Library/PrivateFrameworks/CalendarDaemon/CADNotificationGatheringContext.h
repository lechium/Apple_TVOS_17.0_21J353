//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ClientConnection, NSArray, NSDate, NSMutableArray, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface CADNotificationGatheringContext : NSObject
{
    NSString *_sourceExternalIdentifier;	// 8 = 0x8
    _Bool _excludingDelegateSources;	// 16 = 0x10
    _Bool _filteredByShowsNotificationsFlag;	// 17 = 0x11
    _Bool _expanded;	// 18 = 0x12
    NSSet *_uncheckedCalendarIdentifiers;	// 24 = 0x18
    NSMutableArray *_notifications;	// 32 = 0x20
    double _earliestExpirationDate;	// 40 = 0x28
    _Bool _deleteOldNotifications;	// 48 = 0x30
    ClientConnection *_connection;	// 56 = 0x38
    double _now;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000048257
@property(readonly, nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(readonly, nonatomic) _Bool deleteOldNotifications; // @synthesize deleteOldNotifications=_deleteOldNotifications;
@property(readonly, nonatomic) double now; // @synthesize now=_now;
@property(readonly, nonatomic) NSArray *notifications; // @synthesize notifications=_notifications;
@property(readonly, nonatomic) ClientConnection *connection; // @synthesize connection=_connection;
- (double)endDateOfLastOccurrenceInCacheForEvent:(void *)arg1 database:(struct CalDatabase *)arg2 cacheRange:(id *)arg3;	// IMP=0x0000000000048105
- (double)expirationTimestampForRecurrence:(void *)arg1 event:(void *)arg2 database:(struct CalDatabase *)arg3;	// IMP=0x0000000000047ea5
- (double)expirationTimestampForEvent:(void *)arg1 withInitialOccurrenceDate:(double)arg2 database:(struct CalDatabase *)arg3;	// IMP=0x0000000000047cad
- (double)expirationTimestampForEvent:(void *)arg1 database:(struct CalDatabase *)arg2;	// IMP=0x0000000000047c4e
- (_Bool)isEventTimeSensitiveForFocus:(void *)arg1;	// IMP=0x00000000000478f9
- (id)nearestProposedTimeForEvent:(void *)arg1;	// IMP=0x000000000004766a
- (_Bool)eventHasNewProposedTime:(void *)arg1;	// IMP=0x00000000000474b8
- (_Bool)shouldSkipNotificationForCalendar:(void *)arg1;	// IMP=0x0000000000047422
- (_Bool)shouldSkipNotificationForStore:(void *)arg1;	// IMP=0x0000000000047275
- (void)addNotification:(id)arg1;	// IMP=0x0000000000047206
@property(readonly, nonatomic) NSDate *earliestExpiringNotification;
- (id)initWithConnection:(id)arg1 afterDate:(id)arg2 forSourceWithExternalIdentifier:(id)arg3 excludingDelegateSources:(_Bool)arg4 excludingUncheckedCalendars:(_Bool)arg5 filteredByShowsNotificationsFlag:(_Bool)arg6 expanded:(_Bool)arg7;	// IMP=0x0000000000046fa5

@end

