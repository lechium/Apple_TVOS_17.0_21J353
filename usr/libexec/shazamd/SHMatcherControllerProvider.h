//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SHAttribution, SHAudioTapProvider, SHMatcherFactory;
@protocol SHServiceDelegate;

@interface SHMatcherControllerProvider : NSObject
{
    id <SHServiceDelegate> _delegate;	// 8 = 0x8
    SHMatcherFactory *_matcherFactory;	// 16 = 0x10
    SHAudioTapProvider *_audioTapProvider;	// 24 = 0x18
    SHAttribution *_attribution;	// 32 = 0x20
    long long _clientType;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000003fe51
@property(readonly, nonatomic) long long clientType; // @synthesize clientType=_clientType;
@property(readonly, nonatomic) SHAttribution *attribution; // @synthesize attribution=_attribution;
@property(readonly, nonatomic) SHAudioTapProvider *audioTapProvider; // @synthesize audioTapProvider=_audioTapProvider;
@property(readonly, nonatomic) SHMatcherFactory *matcherFactory; // @synthesize matcherFactory=_matcherFactory;
@property(nonatomic) __weak id <SHServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)associatedMatcherControllerForRequest:(id)arg1;	// IMP=0x001000000003fd54
- (id)catalogForRequest:(id)arg1;	// IMP=0x001000000003fc34
- (id)matcherControllerForRequest:(id)arg1;	// IMP=0x001000000003f561
- (id)initWithAudioTapProvider:(id)arg1 attribution:(id)arg2 clientType:(long long)arg3;	// IMP=0x001000000003f493

@end

