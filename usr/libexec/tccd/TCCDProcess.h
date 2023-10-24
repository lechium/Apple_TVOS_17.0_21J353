//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TCCDProcess : NSObject
{
    _Bool _haveIsPlatformBinary;	// 8 = 0x8
    _Bool _isPlatformBinary;	// 9 = 0x9
    int _pid;	// 12 = 0xc
    unsigned int _auid;	// 16 = 0x10
    unsigned int _euid;	// 20 = 0x14
    unsigned int _codesignStatus;	// 24 = 0x18
    NSString *_responsiblePath;	// 32 = 0x20
    struct au_tid _pidVersion;	// 40 = 0x28
    NSString *_identifier;	// 48 = 0x30
    NSDictionary *_entitlements;	// 56 = 0x38
    NSString *_binaryPath;	// 64 = 0x40
    CDStruct_4c969caf _auditToken;	// 72 = 0x48
}

+ (id)identifierForInvalidCode;	// IMP=0x004000000004304d
- (void).cxx_destruct;	// IMP=0x002000000004428f
@property(retain) NSString *binaryPath; // @synthesize binaryPath=_binaryPath;
@property unsigned int codesignStatus; // @synthesize codesignStatus=_codesignStatus;
@property(retain) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property struct au_tid pidVersion; // @synthesize pidVersion=_pidVersion;
@property unsigned int euid; // @synthesize euid=_euid;
@property unsigned int auid; // @synthesize auid=_auid;
@property int pid; // @synthesize pid=_pid;
@property CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000004403e
- (unsigned long long)hash;	// IMP=0x0010000000044012
- (_Bool)_initializeUsingResponsibleIdentity:(id)arg1;	// IMP=0x001000000004400a
- (_Bool)_initializeUsingTaskForAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x0010000000043d8a
@property(readonly) _Bool isSystemPreferencesApp;
@property(readonly) _Bool isPlatformBinary;
@property(readonly) _Bool hasRuntimeValidationEnabled;
- (_Bool)hasEntitlement:(id)arg1 containsServiceAllOrService:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x0010000000043c48
- (_Bool)hasEntitlement:(id)arg1 containsService:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x0010000000043933
- (id);	// IMP=0x0010000000043812
- (id)dictionaryValueForEntitlement:(id)arg1;	// IMP=0x0010000000043701
- (id)arrayValueForEntitlement:(id)arg1;	// IMP=0x00100000000435ca
- (_Bool)boolValueForEntitlement:(id)arg1;	// IMP=0x0010000000043494
@property(readonly) NSString *responsiblePath; // @synthesize responsiblePath=_responsiblePath;
- (void)dealloc;	// IMP=0x001000000004342f
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1 responsibleIdentity:(id)arg2;	// IMP=0x00100000000430db
- (id)logHandle;	// IMP=0x001000000004305a

@end

