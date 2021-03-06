////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) Microsoft Corporation.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
namespace System
{

    using System;
    [Serializable()]
    public class NotSupportedException : SystemException
    {
        public NotSupportedException()
            : base()
        {
        }

        public NotSupportedException(String message)
            : base(message)
        {
        }

        public NotSupportedException(String message, Exception innerException)
            : base(message, innerException)
        {
        }

    }
}


