//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObservableKeyPath;

__attribute__((visibility("hidden")))
@interface _NSObservableKVO1Adaptor
{
    NSObservableKeyPath *kp;	// 56 = 0x38
    _Bool emitsChanges;	// 64 = 0x40
}

- (void)finishObserving;	// IMP=0x0000000000638dc0
- (void)remove;	// IMP=0x0000000000638d2b
- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 changeKind:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 indexes:(id)arg6 context:(void *)arg7;	// IMP=0x0000000000638cba
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000638c83
- (id)initWithObservable:(id)arg1 observer:(id)arg2 keyPath:(id)arg3;	// IMP=0x0000000000638aef
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000638a5a

@end

