//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class CNAvatarView, UILabel;

__attribute__((visibility("hidden")))
@interface CNUIPeopleCell : UITableViewCell
{
    CNAvatarView *_avatarView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000b2f2a
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
- (void)setupConstraints;	// IMP=0x00000000000b2cd5
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000b2b90

@end

