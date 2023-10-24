//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFPreferences;

__attribute__((visibility("hidden")))
@interface UIDictationConnectionPreferences : NSObject
{
    AFPreferences *_afPreferences;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0060000000addbbc
- (void).cxx_destruct;	// IMP=0x0000000000ade97a
@property(retain, nonatomic) AFPreferences *afPreferences; // @synthesize afPreferences=_afPreferences;
- (_Bool)isOnDeviceEmojiRecognitionSupportAvailableForLanguage:(id)arg1;	// IMP=0x0000000000ade708
- (_Bool)isOnDeviceDictationSupportMissingAssetForLanguage:(id)arg1;	// IMP=0x0000000000ade5cd
- (_Bool)isOnDeviceDictationSupportAvailableForLanguage:(id)arg1;	// IMP=0x0000000000ade245
- (_Bool)isSmartLanguageSelectionEnabled;	// IMP=0x0000000000ade205
- (id)getOfflineDictationStatusForLanguage:(id)arg1;	// IMP=0x0000000000addfd0
- (id)dictationSLSEnabledLanguages;	// IMP=0x0000000000addfba
- (void)afPreferencesChanged:(id)arg1;	// IMP=0x0000000000addf14
- (id)languageCode;	// IMP=0x0000000000addefe
- (id)manualEndpointingThreshold;	// IMP=0x0000000000addee8
- (_Bool)ignoreServerManualEndpointingThreshold;	// IMP=0x0000000000added2
- (_Bool)suppressDictationOptIn;	// IMP=0x0000000000addebc
- (_Bool)suppressDataSharingOptIn;	// IMP=0x0000000000addea6
- (long long)dataSharingOptInStatus;	// IMP=0x0000000000adde90
- (_Bool)dictationIsEnabled;	// IMP=0x0000000000adde7a
- (id)initSingleton;	// IMP=0x0000000000addc21

@end
