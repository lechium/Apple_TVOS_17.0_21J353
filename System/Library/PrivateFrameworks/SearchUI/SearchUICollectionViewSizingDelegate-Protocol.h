//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUI/NSObject-Protocol.h>

@class SearchUICollectionViewLayoutConfiguration;

@protocol SearchUICollectionViewSizingDelegate <NSObject>
- (SearchUICollectionViewLayoutConfiguration *)currentSnapshotLayoutConfiguration;
- (void)contentSizeDidChange:(struct CGSize)arg1;
@end

