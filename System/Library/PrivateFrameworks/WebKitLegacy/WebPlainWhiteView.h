//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebCore/WAKView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebPlainWhiteView : WAKView
{
}

- (id)elementAtPoint:(struct CGPoint)arg1 allowShadowContent:(_Bool)arg2;	// IMP=0x0000000000110540
- (id)elementAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000110530
- (void)viewDidMoveToHostWindow;	// IMP=0x0000000000110520
- (void)viewWillMoveToHostWindow:(id)arg1;	// IMP=0x0000000000110510
- (void)layout;	// IMP=0x0000000000110500
- (void)setNeedsLayout:(_Bool)arg1;	// IMP=0x00000000001104f0
- (void)dataSourceUpdated:(id)arg1;	// IMP=0x00000000001104e0
- (void)setDataSource:(id)arg1;	// IMP=0x00000000001104d0
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000001103a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

