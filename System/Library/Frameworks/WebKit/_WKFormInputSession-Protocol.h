//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKit/NSObject-Protocol.h>

@class NSArray, NSObject, NSString, UIView;
@protocol NSSecureCoding, _WKFocusedElementInfo;

@protocol _WKFormInputSession <NSObject>
@property(readonly, nonatomic) _Bool requiresStrongPasswordAssistance;
@property(nonatomic) _Bool forceSecureTextEntry;
@property(nonatomic) _Bool accessoryViewShouldNotShow;
@property(copy, nonatomic) NSArray *suggestions;
@property(retain, nonatomic) UIView *customInputAccessoryView;
@property(retain, nonatomic) UIView *customInputView;
@property(copy, nonatomic) NSString *accessoryViewCustomButtonTitle;
@property(readonly, nonatomic) id <_WKFocusedElementInfo> focusedElementInfo;
@property(readonly, nonatomic) NSObject<NSSecureCoding> *userObject;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)reloadFocusedElementContextView;
@end

