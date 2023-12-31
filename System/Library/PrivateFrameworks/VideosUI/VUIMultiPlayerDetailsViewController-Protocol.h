//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSArray;
@protocol VUIMultiPlayerDetailsViewControllerDelegate;

@protocol VUIMultiPlayerDetailsViewController <NSObject>
@property(readonly, nonatomic) _Bool hasFocusableContents;
@property(nonatomic) __weak id <VUIMultiPlayerDetailsViewControllerDelegate> detailDelegate;
@property(readonly, nonatomic) long long itemCount;
- (void)updateWithSelectedPlaybackIdentifiers:(NSArray *)arg1 reloadingData:(_Bool)arg2;
@end

