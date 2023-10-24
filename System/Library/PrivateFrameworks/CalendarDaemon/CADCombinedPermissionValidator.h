//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CADPermissionValidator;

__attribute__((visibility("hidden")))
@interface CADCombinedPermissionValidator : NSObject
{
    id <CADPermissionValidator> _validator1;	// 8 = 0x8
    id <CADPermissionValidator> _validator2;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000067d2
@property(readonly) _Bool allowsCustomDatabasePath;
@property(readonly) _Bool shouldTrustClientEnforcedManagedConfigurationAccess;
@property(readonly) _Bool hasManagedConfigurationBundleIDOverrideEntitlement;
@property(readonly) _Bool hasNotificationCountEntitlement;
@property(readonly) _Bool hasChangeIdTrackingOverrideEntitlement;
@property(readonly) _Bool hasCalendarToolEntitlement;
@property(readonly) _Bool hasSyncClientEntitlement;
@property(readonly) _Bool storageManagementAccessGranted;
@property(readonly) _Bool internalAccessLevelGranted;
@property(readonly) _Bool testingAccessLevelGranted;
@property(readonly) _Bool canModifyCalendarDatabase;
@property(readonly) _Bool canRequestDiagnostics;
@property(readonly) _Bool canModifyBirthdayCalendar;
@property(readonly) _Bool canMakeSpotlightChanges;
@property(readonly) _Bool canModifySuggestedEventCalendar;
@property(readonly) _Bool canAccessDatabaseBookmarks;
@property(readonly) _Bool isRemoteUIExtension;
@property(readonly) _Bool isCalendarDaemon;
@property(readonly) _Bool isFirstPartyCalendarApp;
@property(readonly) _Bool hasReminderAccess;
@property(readonly) int eventAccessLevel;
- (id)initWithPermissionValidator:(id)arg1 andValidator:(id)arg2;	// IMP=0x0000000000006234

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

