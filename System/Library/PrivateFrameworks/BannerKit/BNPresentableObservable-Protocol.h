//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BannerKit/NSObject-Protocol.h>

@protocol BNPresentableObserving;

@protocol BNPresentableObservable <NSObject>
- (void)removePresentableObserver:(id <BNPresentableObserving>)arg1;
- (void)addPresentableObserver:(id <BNPresentableObserving>)arg1;
@end

