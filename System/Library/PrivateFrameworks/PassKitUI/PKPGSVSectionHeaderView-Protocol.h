//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class UIView;
@protocol PKPGSVSectionHeaderDelegate;

@protocol PKPGSVSectionHeaderView <NSObject>
- (void)setHeaderDelegate:(id <PKPGSVSectionHeaderDelegate>)arg1;
- (void)setSectionsState:(CDStruct_e7027284)arg1;
- (_Bool)needsRemoval;
- (UIView *)trailingView;
- (UIView *)leadingView;
@end

