//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSArray, PKGroup, PKPassGroupStackView, UIView;
@protocol PKPGSVSectionHeaderView;

@protocol PKPassGroupStackViewDatasource <NSObject>
- (_Bool)isInField;
- (_Bool)supportsExternalPresentation;
- (unsigned long long)indexOfSeparationGroup;
- (_Bool)areGroupsSeparated;
- (unsigned long long)indexOfGroup:(PKGroup *)arg1;
- (PKGroup *)groupAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfGroups;

@optional
- (UIView *)footerForGroupStackView:(PKPassGroupStackView *)arg1;
- (NSArray *)groupStackView:(PKPassGroupStackView *)arg1 subheadersWithState:(CDStruct_e7027284)arg2;
- (UIView<PKPGSVSectionHeaderView> *)groupStackView:(PKPassGroupStackView *)arg1 headerForPassType:(unsigned long long)arg2 withState:(CDStruct_e7027284)arg3;
- (_Bool)groupStackView:(PKPassGroupStackView *)arg1 willHaveSubheaderViewsWithState:(CDStruct_e7027284)arg2;
- (_Bool)groupStackView:(PKPassGroupStackView *)arg1 willHaveHeaderViewForPassType:(unsigned long long)arg2 withState:(CDStruct_e7027284)arg3;
- (_Bool)groupStackView:(PKPassGroupStackView *)arg1 requiresHeaderForPassType:(unsigned long long)arg2 withState:(CDStruct_de3e7fe9)arg3;
- (_Bool)groupStackViewShouldShowHeaderViews:(PKPassGroupStackView *)arg1;
- (PKGroup *)featuredGroup;
- (double)externalPresentationNavigationHeight;
- (void)endPinningExternalPresentationNavigationHeight;
- (void)beginPinningExternalPresentationNavigationHeight;
@end

