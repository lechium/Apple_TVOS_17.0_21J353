//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HBAppGridLayout.h"

__attribute__((visibility("hidden")))
@interface HBFolderAppGridLayout : HBAppGridLayout
{
}

- (id)indexPathNearPosition:(struct CGPoint)arg1 constrainToHoverRect:(_Bool)arg2;	// IMP=0x000000000004d36c
- (id)indexPathInDirection:(long long)arg1 fromIndexPath:(id)arg2;	// IMP=0x000000000004d174
- (unsigned long long)colFromIndexPath:(id)arg1;	// IMP=0x000000000004d10f
- (unsigned long long)rowFromIndexPath:(id)arg1;	// IMP=0x000000000004d0aa
@property(readonly, nonatomic) unsigned long long totalNumberOfColumns;

@end
