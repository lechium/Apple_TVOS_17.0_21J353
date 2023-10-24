//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol SiriSharedUICompactResultViewHosting;

@protocol SiriSharedUICompactResultViewDelegate
- (void)resultViewContentScrolling:(id <SiriSharedUICompactResultViewHosting>)arg1 didBegin:(_Bool)arg2;
- (void)resultViewContentScrolled:(id <SiriSharedUICompactResultViewHosting>)arg1 toContentOffset:(struct CGPoint)arg2;
- (struct UIEdgeInsets)contentInsetsForResultView:(id <SiriSharedUICompactResultViewHosting>)arg1;
- (double)maximumHeightForResultView:(id <SiriSharedUICompactResultViewHosting>)arg1;
- (void)resultViewContentDidLoad:(id <SiriSharedUICompactResultViewHosting>)arg1;
- (void)resultViewDarkenedContentWasTapped:(id <SiriSharedUICompactResultViewHosting>)arg1;
- (void)resultViewContentDidScroll:(id <SiriSharedUICompactResultViewHosting>)arg1;
@end
