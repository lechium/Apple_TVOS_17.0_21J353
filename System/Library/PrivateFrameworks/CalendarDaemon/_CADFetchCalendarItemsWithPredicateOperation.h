//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class CADPredicate, ClientConnection, NSString;

__attribute__((visibility("hidden")))
@interface _CADFetchCalendarItemsWithPredicateOperation : NSOperation
{
    CADPredicate *_predicate;	// 8 = 0x8
    int _entityType;	// 16 = 0x10
    ClientConnection *_connection;	// 24 = 0x18
    int _fetchIdentifier;	// 32 = 0x20
    CDUnknownBlockType _completion;	// 40 = 0x28
}

+ (_Bool)isJunkEvent:(void *)arg1;	// IMP=0x0010000000029863
+ (void)queryDatabase:(struct CalDatabase *)arg1 withID:(int)arg2 predicate:(id)arg3 connection:(id)arg4 serializer:(id)arg5 cancellationToken:(id)arg6;	// IMP=0x0010000000029327
+ (id)performSynchronouslyWithPredicate:(id)arg1 entityType:(int)arg2 connection:(id)arg3 fetchIdentifier:(int)arg4 cancellationToken:(id)arg5;	// IMP=0x0010000000028e60
- (void).cxx_destruct;	// IMP=0x00000000000298fb
@property(readonly, nonatomic) int fetchIdentifier; // @synthesize fetchIdentifier=_fetchIdentifier;
- (void)cancel;	// IMP=0x00000000000298aa
- (void)main;	// IMP=0x0000000000028da4
- (id)initWithPredicate:(id)arg1 entityType:(int)arg2 connection:(id)arg3 fetchIdentifier:(int)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000028cae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isCancelled;
@property(readonly) Class superclass;

@end

