//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTRDeviceController, NSMutableDictionary, NSObject;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AttributePathParams {
    unsigned int _field1;
    unsigned int _field2;
    unsigned short _field3;
    unsigned short _field4;
};

struct BleApplicationDelegate;

struct BleConnectionDelegate;

struct BleLayer {
    int _field1;
    void *_field2;
    struct BleLayerDelegate *_field3;
    CDUnknownFunctionPointerType _field4;
    struct BleConnectionDelegate *_field5;
    struct BlePlatformDelegate *_field6;
    struct BleApplicationDelegate *_field7;
    struct Layer *_field8;
};

struct BleLayerDelegate;

struct BlePlatformDelegate;

struct BleScannerDelegate {
    CDUnknownFunctionPointerType *_field1;
};

struct ChipBleUUID {
    unsigned char _field1[16];
};

struct ChipError {
    unsigned int mError;
    char *mFile;
    unsigned int mLine;
};

struct CommissionableBrowserInternal {
    CDUnknownFunctionPointerType *_vptr$CommissioningResolveDelegate;
    CDUnknownFunctionPointerType *_vptr$DnssdBrowseDelegate;
    CDUnknownFunctionPointerType *_vptr$BleScannerDelegate;
    NSObject *mDispatchQueue;
    id mDelegate;
    MTRDeviceController *mController;
    NSMutableDictionary *mDiscoveredResults;
};

struct EventPathParams {
    unsigned int _field1;
    unsigned int _field2;
    unsigned short _field3;
    _Bool _field4;
};

struct Layer;

struct OperationalKeystore {
    CDUnknownFunctionPointerType *_field1;
};

struct Optional<chip::Dnssd::CommonResolutionData> {
    _Bool mHasValue;
    union Value {
        struct CommonResolutionData {
            struct InterfaceId {
                unsigned int mPlatformInterface;
            } interfaceId;
            unsigned long long numIPs;
            struct IPAddress {
                unsigned int Addr[4];
            } ipAddress[5];
            unsigned short port;
            char hostName[17];
            _Bool supportsTcp;
            struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> {
                _Bool mHasValue;
                union Value {
                    struct duration<unsigned int, std::ratio<1, 1000>> {
                        unsigned int __rep_;
                    } mData;
                } mValue;
            } mrpRetryIntervalIdle;
            struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> {
                _Bool mHasValue;
                union Value {
                    struct duration<unsigned int, std::ratio<1, 1000>> {
                        unsigned int __rep_;
                    } mData;
                } mValue;
            } mrpRetryIntervalActive;
        } mData;
    } mValue;
};

struct Optional<unsigned char> {
    _Bool mHasValue;
    union Value {
        unsigned char mData;
    } mValue;
};

struct SetupDiscriminator {
    unsigned int mDiscriminator:12;
    unsigned int mIsShortDiscriminator:1;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct Optional<chip::Dnssd::CommonResolutionData> {
    _Bool mHasValue;
    union Value {
        struct CommonResolutionData {
            struct InterfaceId {
                unsigned int mPlatformInterface;
            } interfaceId;
            unsigned long long numIPs;
            struct IPAddress {
                unsigned int Addr[4];
            } ipAddress[5];
            unsigned short port;
            char hostName[17];
            _Bool supportsTcp;
            struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> {
                _Bool mHasValue;
                union Value {
                    struct duration<unsigned int, std::ratio<1, 1000>> {
                        unsigned int __rep_;
                    } mData;
                } mValue;
            } mrpRetryIntervalIdle;
            struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> {
                _Bool mHasValue;
                union Value {
                    struct duration<unsigned int, std::ratio<1, 1000>> {
                        unsigned int __rep_;
                    } mData;
                } mValue;
            } mrpRetryIntervalActive;
        } mData;
    } mValue;
} Optional_64584f03;

typedef struct Optional<unsigned char> {
    _Bool mHasValue;
    union Value {
        unsigned char mData;
    } mValue;
} Optional_a70626db;

