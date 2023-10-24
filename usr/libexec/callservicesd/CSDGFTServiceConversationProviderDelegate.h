//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol CSDProcessObserverProtocol;

@interface CSDGFTServiceConversationProviderDelegate
{
    id <CSDProcessObserverProtocol> _processObserver;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000017e540
@property(readonly, nonatomic) id <CSDProcessObserverProtocol> processObserver; // @synthesize processObserver=_processObserver;
- (_Bool)shouldHandleProvider:(id)arg1;	// IMP=0x001000000017e50f
- (_Bool)shouldHandleProviderWithIdentifier:(id)arg1;	// IMP=0x001000000017e48a
- (_Bool)shouldHandleUpdateForProvider:(id)arg1;	// IMP=0x001000000017e478
- (void)conversationManager:(id)arg1 conversationChanged:(id)arg2;	// IMP=0x001000000017d9cc
- (_Bool)isManagingCallWithUUID:(id)arg1;	// IMP=0x001000000017d83f
- (void)provider:(id)arg1 performSetSendingVideoCallAction:(id)arg2;	// IMP=0x001000000017d75b
- (void)provider:(id)arg1 performSetRelayingCallAction:(id)arg2;	// IMP=0x001000000017d677
- (void)provider:(id)arg1 performEndCallAction:(id)arg2;	// IMP=0x001000000017d370
- (void)provider:(id)arg1 performJoinCallAction:(id)arg2;	// IMP=0x001000000017c977
- (_Bool)isProviderForeground:(id)arg1;	// IMP=0x001000000017c7b5
- (id)initWithConversationManager:(id)arg1 queue:(id)arg2 invitationResolver:(id)arg3;	// IMP=0x001000000017c2ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

