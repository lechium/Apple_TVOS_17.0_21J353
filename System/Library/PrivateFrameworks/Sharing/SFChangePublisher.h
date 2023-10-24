//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPointerArray;

__attribute__((visibility("hidden")))
@interface SFChangePublisher : NSObject
{
    NSPointerArray *_observers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000025a86
@property(readonly, nonatomic) NSPointerArray *observers; // @synthesize observers=_observers;
- (void)publishChangeDescriptor:(unsigned long long)arg1 forObservable:(id)arg2;	// IMP=0x0000000000025966
- (void)unregisterChangeObserver:(id)arg1;	// IMP=0x000000000002585f
- (void)registerChangeObserver:(id)arg1;	// IMP=0x0000000000025849
- (id)init;	// IMP=0x00000000000257e3

@end

