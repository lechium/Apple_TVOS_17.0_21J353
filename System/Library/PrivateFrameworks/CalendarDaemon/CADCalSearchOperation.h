//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

#import <CalendarDaemon/CalSearchDataSink-Protocol.h>

@class CalSearch, ClientConnection, NSArray, NSMutableArray, NSObject, NSString;
@protocol NSObject, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface CADCalSearchOperation : NSOperation <CalSearchDataSink>
{
    ClientConnection *_connection;	// 8 = 0x8
    CalSearch *_currentSearch;	// 16 = 0x10
    int _currentDatabaseID;	// 24 = 0x18
    NSArray *_calendars;	// 32 = 0x20
    NSString *_searchTerm;	// 40 = 0x28
    NSObject<OS_dispatch_semaphore> *_finishedSemaphore;	// 48 = 0x30
    unsigned int _replyID;	// 56 = 0x38
    id <NSObject> _boostToken;	// 64 = 0x40
    struct os_unfair_lock_s _lock;	// 72 = 0x48
    NSMutableArray *_objectIDsForPrivacyAccounting;	// 80 = 0x50
}

+ (id)operationWithConnection:(id)arg1 searchTerm:(id)arg2 calendars:(id)arg3 replyID:(unsigned int)arg4;	// IMP=0x00100000000606e5
- (void).cxx_destruct;	// IMP=0x000000000006133d
- (void)_completeOperation;	// IMP=0x00000000000611ed
- (void)calSearch:(id)arg1 showResultsStartingOnDate:(double)arg2;	// IMP=0x00000000000611e7
- (_Bool)calSearchShouldStopSearching:(id)arg1;	// IMP=0x00000000000611d5
- (void)calSearchComplete:(id)arg1;	// IMP=0x0000000000061168
- (void)calSearch:(id)arg1 foundOccurrences:(struct __CFArray *)arg2 cachedDays:(struct __CFArray *)arg3 cachedDaysIndexes:(struct __CFArray *)arg4;	// IMP=0x0000000000060e65
- (void)cancel;	// IMP=0x0000000000060d6b
- (void)main;	// IMP=0x0000000000060a91
- (unsigned int)replyID;	// IMP=0x0000000000060a81
- (void)dealloc;	// IMP=0x0000000000060a04
- (void)configureSearch:(id)arg1;	// IMP=0x000000000006098c
- (id)initWithConnection:(id)arg1 searchTerm:(id)arg2 calendars:(id)arg3 replyID:(unsigned int)arg4;	// IMP=0x000000000006077e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
