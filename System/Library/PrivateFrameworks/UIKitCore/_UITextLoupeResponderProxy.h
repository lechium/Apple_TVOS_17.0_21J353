//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIResponder.h"

@protocol _UITextLoupeResponderProxyDelegate;

__attribute__((visibility("hidden")))
@interface _UITextLoupeResponderProxy : UIResponder
{
    UIResponder *_responder;	// 8 = 0x8
    id <_UITextLoupeResponderProxyDelegate> _delegate;	// 16 = 0x10
}

+ (id)_proxyWithResponder:(id)arg1;	// IMP=0x00600000011231d8
- (void).cxx_destruct;	// IMP=0x00000000011232fa
@property(nonatomic) __weak id <_UITextLoupeResponderProxyDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIResponder *responder; // @synthesize responder=_responder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0000000001123239
- (id)nextResponder;	// IMP=0x0000000001123220

@end
