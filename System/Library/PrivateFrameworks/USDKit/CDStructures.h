//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Named Structures

struct Handle {
    unsigned int value;
};

struct SdfPath {
    struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8>::Handle, true, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> _primPart;
    struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8>::Handle, false, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> _propPart;
};

struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8>::Handle, true, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> {
    struct Handle _poolHandle;
};

struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8>::Handle, false, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> {
    struct Handle _poolHandle;
};

struct UsdPrimRange {
    struct Usd_PrimData *_begin;
    struct Usd_PrimData *_end;
    struct SdfPath _initProxyPrimPath;
    struct Usd_PrimFlagsPredicate _predicate;
    unsigned int _initDepth;
    _Bool _postOrder;
};

struct UsdPrimSiblingIterator {
    struct Usd_PrimData *m_iterator;
    struct SdfPath _proxyPrimPath;
    struct Usd_PrimFlagsPredicate _predicate;
};

struct UsdProperty;

struct Usd_PrimData;

struct Usd_PrimFlagsPredicate {
    struct bitset<14UL> _mask;
    struct bitset<14UL> _values;
    _Bool _negate;
};

struct bitset<14UL> {
    unsigned long long __first_;
};

struct iterator {
    struct Usd_PrimData *m_iterator;
    struct UsdPrimRange *_range;
    struct SdfPath _proxyPrimPath;
    unsigned int _depth;
    _Bool _pruneChildrenFlag;
    _Bool _isPost;
};

struct iterator_range<pxrInternal_v0_22__aapl__pxrReserved__::UsdPrimSiblingIterator> {
    struct UsdPrimSiblingIterator m_Begin;
    struct UsdPrimSiblingIterator m_End;
};

struct vector<pxrInternal_v0_22__aapl__pxrReserved__::UsdProperty, std::allocator<pxrInternal_v0_22__aapl__pxrReserved__::UsdProperty>> {
    struct UsdProperty *__begin_;
    struct UsdProperty *__end_;
    struct __compressed_pair<pxrInternal_v0_22__aapl__pxrReserved__::UsdProperty *, std::allocator<pxrInternal_v0_22__aapl__pxrReserved__::UsdProperty>> {
        struct UsdProperty *__value_;
    } __end_cap_;
};

