//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallKit/CXAbstractProviderDelegate-Protocol.h>

@class CXRemoveVoicemailAction, CXSetPlayedVoicemailAction, CXSetTrashedVoicemailAction, CXVoicemailProvider;

@protocol CXVoicemailProviderDelegate <CXAbstractProviderDelegate>

@optional
- (void)provider:(CXVoicemailProvider *)arg1 performRemoveVoicemailAction:(CXRemoveVoicemailAction *)arg2;
- (void)provider:(CXVoicemailProvider *)arg1 performSetTrashedVoicemailAction:(CXSetTrashedVoicemailAction *)arg2;
- (void)provider:(CXVoicemailProvider *)arg1 performSetPlayedVoicemailAction:(CXSetPlayedVoicemailAction *)arg2;
@end

