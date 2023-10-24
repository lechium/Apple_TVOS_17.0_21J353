//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCoreAVFLoaderDelegate : NSObject
{
    struct WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC, WTF::DefaultWeakPtrImpl> m_player;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000131ac0
- (void).cxx_destruct;	// IMP=0x0000000000131a90
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;	// IMP=0x0000000000131970
- (_Bool)resourceLoader:(id)arg1 shouldWaitForResponseToAuthenticationChallenge:(id)arg2;	// IMP=0x0000000000131960
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;	// IMP=0x0000000000131830
- (id)initWithPlayer:(void *)arg1;	// IMP=0x00000000001317c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
