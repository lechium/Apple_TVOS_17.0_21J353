//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI26ScrollViewDelegateObserver : NSObject
{
    MISSING_TYPE *compoundScrollObserver;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001e3df7
- (id)init;	// IMP=0x00000000001e3db3
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;	// IMP=0x00000000001e3ce0
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000001e3c75
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00000000001e3bfd
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000000001e3b92
- (void)scrollViewWillBeginDecelerating:(id)arg1;	// IMP=0x00000000001e3b27
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000001e3abc

@end
