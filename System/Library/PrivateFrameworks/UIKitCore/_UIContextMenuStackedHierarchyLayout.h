//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UIContextMenuView;

__attribute__((visibility("hidden")))
@interface _UIContextMenuStackedHierarchyLayout : NSObject
{
    _UIContextMenuView *_menuView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c1163b
@property(nonatomic) __weak _UIContextMenuView *menuView; // @synthesize menuView=_menuView;
- (id)_metrics;	// IMP=0x0000000000c11592
- (void)navigateUpFromNode:(id)arg1 toNode:(id)arg2 alongsideAnimations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000c10aa9
- (void)navigateDownFromNode:(id)arg1 toNode:(id)arg2 alongsideAnimations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000c0fda4
- (void)performLayoutForComputingPreferredContentSize:(_Bool)arg1 withMaxContainerSize:(struct CGSize)arg2;	// IMP=0x0000000000c0f4fe
- (struct CGSize)encompassingSize;	// IMP=0x0000000000c0f314
- (id)initWithMenuView:(id)arg1;	// IMP=0x0000000000c0f2ac

@end

