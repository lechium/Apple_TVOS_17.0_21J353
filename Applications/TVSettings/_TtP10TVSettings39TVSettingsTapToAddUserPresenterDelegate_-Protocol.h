//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TVSettingsTapToAddUserResult, _TtC10TVSettings31TVSettingsTapToAddUserPresenter;

@protocol _TtP10TVSettings39TVSettingsTapToAddUserPresenterDelegate_
- (void)tapToAddUserPresenter:(_TtC10TVSettings31TVSettingsTapToAddUserPresenter *)arg1 didFinishWithResult:(TVSettingsTapToAddUserResult *)arg2;
- (void)tapToAddUserPresenterDidSuppressSuggestion:(_TtC10TVSettings31TVSettingsTapToAddUserPresenter *)arg1;
- (void)tapToAddUserPresenter:(_TtC10TVSettings31TVSettingsTapToAddUserPresenter *)arg1 finishHomeKitSetupWithResult:(TVSettingsTapToAddUserResult *)arg2;
- (void)tapToAddUserPresenterManualSignInTriggered:(_TtC10TVSettings31TVSettingsTapToAddUserPresenter *)arg1;

@optional
- (void)tapToAddUserPresenterDidDismiss:(_TtC10TVSettings31TVSettingsTapToAddUserPresenter *)arg1;
@end
