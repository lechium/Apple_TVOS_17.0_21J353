//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObservation.h"

@class NSObject;
@protocol NSObservable, NSObserver;

__attribute__((visibility("hidden")))
@interface _NSConcreteObservation : NSObservation
{
    NSObject<NSObservable> *_LHSobservable;	// 8 = 0x8
    NSObject<NSObserver> *_RHSobserver;	// 16 = 0x10
    id _observers[4];	// 24 = 0x18
}

- (void)dealloc;	// IMP=0x000000000065705a
- (void)_receiveBox:(id)arg1;	// IMP=0x0000000000656efa
- (void)finishObserving;	// IMP=0x0000000000656e99
- (void)remove;	// IMP=0x0000000000656e44
- (void *)_observerStorageOfSize:(unsigned long long)arg1;	// IMP=0x0000000000656e0f
- (id)initWithObservable:(id)arg1 observer:(id)arg2;	// IMP=0x0000000000656cbf
- (id)debugDescription;	// IMP=0x0000000000656c32
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000656bd8

@end
