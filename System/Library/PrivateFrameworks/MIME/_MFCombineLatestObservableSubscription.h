//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSLock, NSMutableArray, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface _MFCombineLatestObservableSubscription : NSObject
{
    NSLock *_lock;	// 8 = 0x8
    NSArray *_observables;	// 16 = 0x10
    NSMutableArray *_results;	// 24 = 0x18
    NSMutableArray *_tokens;	// 32 = 0x20
    NSMutableIndexSet *_activeIndexes;	// 40 = 0x28
    NSMutableIndexSet *_silentIndexes;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001d74d
@property(retain, nonatomic) NSMutableIndexSet *silentIndexes; // @synthesize silentIndexes=_silentIndexes;
@property(retain, nonatomic) NSMutableIndexSet *activeIndexes; // @synthesize activeIndexes=_activeIndexes;
@property(retain, nonatomic) NSMutableArray *tokens; // @synthesize tokens=_tokens;
@property(retain, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property(copy, nonatomic) NSArray *observables; // @synthesize observables=_observables;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
- (void)_observableAtIndex:(unsigned long long)arg1 didFailWithError:(id)arg2 observer:(id)arg3;	// IMP=0x000000000001d5ce
- (void)_observableAtIndex:(unsigned long long)arg1 didCompleteForObserver:(id)arg2;	// IMP=0x000000000001d502
- (void)_observableAtIndex:(unsigned long long)arg1 receivedResult:(id)arg2 observer:(id)arg3;	// IMP=0x000000000001d415
- (id)subscribe:(id)arg1;	// IMP=0x000000000001cfe8
- (id)initWithObservables:(id)arg1;	// IMP=0x000000000001cdb5

@end

