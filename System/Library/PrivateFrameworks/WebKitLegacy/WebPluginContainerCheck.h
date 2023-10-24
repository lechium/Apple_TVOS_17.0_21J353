//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURLRequest, WebPolicyDecisionListener;
@protocol WebPluginContainerCheckController;

__attribute__((visibility("hidden")))
@interface WebPluginContainerCheck : NSObject
{
    NSURLRequest *_request;	// 8 = 0x8
    NSString *_target;	// 16 = 0x10
    id <WebPluginContainerCheckController> _controller;	// 24 = 0x18
    id _resultObject;	// 32 = 0x20
    SEL _resultSelector;	// 40 = 0x28
    id _contextInfo;	// 48 = 0x30
    _Bool _done;	// 56 = 0x38
    WebPolicyDecisionListener *_listener;	// 64 = 0x40
}

+ (id)checkWithRequest:(id)arg1 target:(id)arg2 resultObject:(id)arg3 selector:(SEL)arg4 controller:(id)arg5 contextInfo:(id)arg6;	// IMP=0x006000000009edc0
- (id)contextInfo;	// IMP=0x000000000009f250
- (void)cancel;	// IMP=0x000000000009f1c0
- (void)start;	// IMP=0x000000000009f180
- (void)_askPolicyDelegate;	// IMP=0x000000000009f060
- (id)_actionInformationWithURL:(id)arg1;	// IMP=0x000000000009efc0
- (_Bool)_isForbiddenFileLoad;	// IMP=0x000000000009eec0
- (void)_continueWithPolicy:(unsigned char)arg1;	// IMP=0x000000000009ee60
- (void)dealloc;	// IMP=0x000000000009ee30
- (id)initWithRequest:(id)arg1 target:(id)arg2 resultObject:(id)arg3 selector:(SEL)arg4 controller:(id)arg5 contextInfo:(id)arg6;	// IMP=0x000000000009ed10

@end

