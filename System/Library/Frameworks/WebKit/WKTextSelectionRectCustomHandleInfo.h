//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextSelectionRectCustomHandleInfo.h>

__attribute__((visibility("hidden")))
@interface WKTextSelectionRectCustomHandleInfo : UITextSelectionRectCustomHandleInfo
{
    struct FloatQuad _quad;	// 8 = 0x8
    _Bool _isHorizontal;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x0000000000400904
- (struct CGPoint)topRight;	// IMP=0x00000000004008d8
- (struct CGPoint)bottomRight;	// IMP=0x00000000004008af
- (struct CGPoint)topLeft;	// IMP=0x0000000000400886
- (struct CGPoint)bottomLeft;	// IMP=0x000000000040085f
- (id)initWithFloatQuad:(const struct FloatQuad *)arg1 isHorizontal:(_Bool)arg2;	// IMP=0x00000000004007fd

@end

