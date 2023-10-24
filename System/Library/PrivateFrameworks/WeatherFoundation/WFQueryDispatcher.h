//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface WFQueryDispatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_queriesPendingResponse;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003f33d
@property(retain, nonatomic) NSMutableDictionary *queriesPendingResponse; // @synthesize queriesPendingResponse=_queriesPendingResponse;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)fetchFavoriteLocationsWithTaskIdentifier:(id)arg1 results:(CDUnknownBlockType)arg2;	// IMP=0x000000000003f218
- (void)invalidateCacheWithIdentifier:(id)arg1;	// IMP=0x000000000003f1c3
- (void)cancelTaskWithIdentifier:(id)arg1;	// IMP=0x000000000003f096
- (void)locationForSearchCompletion:(id)arg1 taskIdentifier:(id)arg2 results:(CDUnknownBlockType)arg3;	// IMP=0x000000000003ef57
- (void)locationForString:(id)arg1 taskIdentifier:(id)arg2 results:(CDUnknownBlockType)arg3;	// IMP=0x000000000003ee18
- (void)locationForCoordinate:(struct CLLocationCoordinate2D)arg1 taskIdentifier:(id)arg2 results:(CDUnknownBlockType)arg3;	// IMP=0x000000000003eccd
- (void)removePendingQueryWithIdentifier:(id)arg1;	// IMP=0x000000000003eb52
- (void)dispatchQuery:(id)arg1;	// IMP=0x000000000003e960
- (id)init;	// IMP=0x000000000003e8e9

@end

