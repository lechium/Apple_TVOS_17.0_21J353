//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CardKit/CRKEventResponding-Protocol.h>

@protocol CRKCardSectionViewControllingDelegate;

@protocol CRKCardSectionViewControlling <CRKEventResponding>
@property(nonatomic) __weak id <CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate;

@optional
- (void)desiresInteractivity:(void (^)(_Bool))arg1;
@end

